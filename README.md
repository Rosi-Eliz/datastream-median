# Datasteram Median

The application should receive a stream of either integer or fraction numbers, for which
a median value should be outputed. The project is using `CMake` for a build system

## Installation

Navigate to the root folder of the project and go to the `build` folder and execute the following commands to create the executable file:
```bash
cmake ..

make
```

## Usage

In order to run the application, run the executable file using the follwing command:
```
./datastreamMedian
```
A prompt will appear, requiring the input of a number sequence sepparated by a blank delimeter. After the input entry the median value should be outputed.

## Tests

In order to create an executable for the tests navigate to the root project folder and go to `tests`. Execute the following command:

```
cmake .

make
```

In order to execute the tests the following commands should be run from the same folder:
```
./minHeapTests
./maxHeapTests
./medianTests
./utilitiesTests
```