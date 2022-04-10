# example-imath

Example for using the imath library.

## Usage Example

Create a build folder (-B) if it does not exist, with the source directory defined as -S.
```console
❯ cmake -S . -B build
```

Invoke the chosen build system on target `example`:
```console
❯ cmake --build build -t example
```

Execute the resulting example binary:
```console
❯ build/example
What's your vector, Victor? (1.42426 2.56569 3.70711)
```

## Status

Experimental.

**Note**: The default branch is default.
