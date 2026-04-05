.PHONY: help setup up down shell build-asst0 build-asst1 build-asst2 build-asst3 build-asst4 build-asst5 run-kernel clean logs

help:
	@echo "OS/161 Assignment Development Environment"
	@echo "=========================================="
	@echo ""
	@echo "Available commands:"
	@echo ""
	@echo "  make setup          - Initial setup (extract source, build image)"
	@echo "  make up             - Start development environment"
	@echo "  make down           - Stop development environment"
	@echo "  make shell          - Enter container shell"
	@echo ""
	@echo "  Building:"
	@echo "  make build-asst0    - Build ASST0 kernel"
	@echo "  make build-asst1    - Build ASST1 kernel"
	@echo "  make build-asst2    - Build ASST2 kernel"
	@echo "  make build-asst3    - Build ASST3 kernel"
	@echo "  make build-asst4    - Build ASST4 kernel"
	@echo "  make build-asst5    - Build ASST5 kernel"
	@echo ""
	@echo "  Testing:"
	@echo "  make run-kernel     - Run kernel in sys161"
	@echo "  make logs           - View container logs"
	@echo ""
	@echo "  Maintenance:"
	@echo "  make clean          - Clean build artifacts"
	@echo "  make clean-image    - Remove Docker image"
	@echo ""

setup:
	@echo "Running setup..."
	@bash setup-assignments.sh

up:
	@echo "Starting OS/161 development environment..."
	@docker compose up -d
	@echo "✅ Environment started"
	@echo ""
	@echo "Enter container with: make shell"

down:
	@echo "Stopping OS/161 development environment..."
	@docker compose down
	@echo "✅ Environment stopped"

shell:
	@docker compose exec os161 bash

build-asst0:
	@echo "Building ASST0 kernel..."
	@docker compose exec os161 bash -c "cd /root/cs350-os161/os161-1.99/kern/conf && ./config ASST0 && cd ../compile/ASST0 && bmake depend && bmake && bmake install"
	@echo "✅ ASST0 kernel built"

build-asst1:
	@echo "Building ASST1 kernel..."
	@docker compose exec os161 bash -c "cd /root/cs350-os161/os161-1.99/kern/conf && ./config ASST1 && cd ../compile/ASST1 && bmake depend && bmake && bmake install"
	@echo "✅ ASST1 kernel built"

build-asst2:
	@echo "Building ASST2 kernel..."
	@docker compose exec os161 bash -c "cd /root/cs350-os161/os161-1.99/kern/conf && ./config ASST2 && cd ../compile/ASST2 && bmake depend && bmake && bmake install"
	@echo "✅ ASST2 kernel built"

build-asst3:
	@echo "Building ASST3 kernel..."
	@docker compose exec os161 bash -c "cd /root/cs350-os161/os161-1.99/kern/conf && ./config ASST3 && cd ../compile/ASST3 && bmake depend && bmake && bmake install"
	@echo "✅ ASST3 kernel built"

build-asst4:
	@echo "Building ASST4 kernel..."
	@docker compose exec os161 bash -c "cd /root/cs350-os161/os161-1.99/kern/conf && ./config ASST4 && cd ../compile/ASST4 && bmake depend && bmake && bmake install"
	@echo "✅ ASST4 kernel built"

build-asst5:
	@echo "Building ASST5 kernel..."
	@docker compose exec os161 bash -c "cd /root/cs350-os161/os161-1.99/kern/conf && ./config ASST5 && cd ../compile/ASST5 && bmake depend && bmake && bmake install"
	@echo "✅ ASST5 kernel built"

run-kernel:
	@echo "Running kernel in sys161..."
	@docker compose exec os161 bash -c "cd /root/cs350-os161 && sys161 kernel"

logs:
	@docker compose logs -f os161

clean:
	@echo "Cleaning build artifacts..."
	@docker compose exec os161 bash -c "cd /root/cs350-os161/os161-1.99/kern && bmake clean"
	@echo "✅ Cleaned"

clean-image:
	@echo "Removing Docker image..."
	@docker rmi os161-env:latest
	@echo "✅ Image removed"
