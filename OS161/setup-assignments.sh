#!/bin/bash
# OS/161 Assignment Setup Script
# Optimized for CS350 coursework

set -e

echo "════════════════════════════════════════════════════════"
echo "  OS/161 Docker Development Environment Setup"
echo "════════════════════════════════════════════════════════"
echo ""

# Check Docker
if ! command -v docker &> /dev/null; then
    echo "❌ Docker is not installed. Please install Docker Desktop."
    exit 1
fi

if ! command -v docker compose &> /dev/null; then
    echo "❌ docker compose is not available. Please update Docker Desktop."
    exit 1
fi

echo "✅ Docker is installed"
echo ""

# Create directory structure
echo "Setting up directory structure..."
mkdir -p os161-source os161-work assignments/{asst0,asst1,asst2,asst3,asst4,asst5}
echo "✅ Created directories"
echo ""

# Extract OS/161 source if not already done
if [ ! -f "os161-source/configure" ]; then
    echo "Extracting OS/161 source..."
    if [ -f "os161-1.99.05-UWF16.tar" ]; then
        tar -xf os161-1.99.05-UWF16.tar -C os161-source/
        if [ -d "os161-source/os161-1.99" ]; then
            mv os161-source/os161-1.99/* os161-source/
            rmdir os161-source/os161-1.99
        fi
        echo "✅ OS/161 source extracted"
    else
        echo "⚠️  os161-1.99.05-UWF16.tar not found"
    fi
else
    echo "✅ OS/161 source already extracted"
fi
echo ""

# Build Docker image if needed
if ! docker image inspect os161-env:latest &> /dev/null; then
    echo "════════════════════════════════════════════════════════"
    echo "  Building Docker Image (20-30 minutes)"
    echo "════════════════════════════════════════════════════════"
    echo ""
    docker build -t os161-env:latest .
    echo ""
    echo "✅ Image built successfully"
else
    echo "✅ Docker image os161-env:latest already exists"
fi
echo ""

# Create .env file for docker-compose
cat > .env << 'EOF'
COMPOSE_PROJECT_NAME=os161
DOCKER_BUILDKIT=1
EOF

echo "Setup complete!"
echo ""
echo "════════════════════════════════════════════════════════"
echo "  Next Steps"
echo "════════════════════════════════════════════════════════"
echo ""
echo "1. Start the development environment:"
echo "   docker compose up -d"
echo ""
echo "2. Enter the container:"
echo "   docker compose exec os161 bash"
echo ""
echo "3. Configure and build kernel:"
echo "   cd /root/cs350-os161/os161-1.99/kern/conf"
echo "   ./config ASST0"
echo "   cd ../compile/ASST0"
echo "   bmake depend && bmake && bmake install"
echo ""
echo "4. Run the kernel:"
echo "   cd /root/cs350-os161"
echo "   sys161 kernel"
echo ""
echo "5. Stop the environment:"
echo "   docker compose down"
echo ""
echo "════════════════════════════════════════════════════════"
