# User-level malloc

## Overview

The user-level malloc implementation is defined to be simple, not fast or efficient. It uses a very basic first-fit block algorithm.

## Header Structure

There's an 8-byte header which holds:

- Offsets to the previous and next blocks
- A used/free bit
- Magic numbers (for consistency checking) in the remaining available header bits

The implementation allocates in units of 8 bytes to guarantee proper alignment of doubles. It also assumes its own headers are aligned on 8-byte boundaries.

## malloc() Operation

On `malloc()`:

1. Searches the entire heap starting at the beginning for the first block big enough to hold the allocation
2. If no suitable block is found, calls `sbrk()` to get more memory
3. If a suitable block is found, marks the block in use
4. Splits the remaining portion of the block off as a new free block only if said portion is large enough to hold both a header and some data

## free() Operation

On `free()`:

1. Marks the block as free
2. Attempts to merge it with adjacent blocks (both above and below) if they're free

## Summary

That's about all there is to it. This simple implementation prioritizes clarity over performance, making it ideal for educational purposes.
