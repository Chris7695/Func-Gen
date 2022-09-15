.DEFAULT_GOAL := build-binary

.PHONY: build-binary
build-binary: # Kompilieren der Binary
	gcc func-gen.c -o func-gen
