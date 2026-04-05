#!/bin/bash
# Setup script for OS/161 Docker development environment

set -e

echo "=== OS/161 Docker Setup ==="
echo ""

# Check Docker is installed
if ! command -v docker &> /dev/null; then
    echo "❌ Docker is not installed. Please install Docker Desktop."
    exit 1
fi

# Check docker-compose is available
if ! command -v docker compose &> /dev/null; then
    echo "❌ docker compose is not available. Please update Docker Desktop."
    exit 1
fi

echo "✅ Docker is installed"
echo ""

# Create local directories for volumes
echo "Creating local directories for volume mounts..."
mkdir -p os161-source
mkdir -p os161-compile
echo "✅ Created os161-source/ and os161-compile/"
echo ""

# Check if image needs to be built
if ! docker image inspect os161-env:latest &> /dev/null; then
    echo "=== Building OS/161 Docker Image ==="
    echo "This will take 20-30 minutes (downloading + compiling toolchain)"
    echo ""
    docker build -t os161-env:latest .
    echo ""
    echo "✅ Image built successfully"
else
    echo "✅ Image os161-env:latest already exists"
fi

echo ""
echo "=== Setup Complete ==="
echo ""
echo "Next steps:"
echo "  1. Extract your OS/161 source to os161-source/ directory"
echo "  2. Run: docker compose up -d"
echo "  3. Access container: docker compose exec os161 bash"
echo ""
echo "Quick test:"
echo "  docker compose up -d"
echo "  docker compose exec os161 sys161 kernel"
echo "  docker compose down"
echo ""
