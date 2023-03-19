# JLink Serial Wire Output (SWO)

The JLinkSWO library is a PlatformIO library that simplifies the integration of Serial Wire Output (SWO) functionality with J-Link debug probes for real-time debugging and tracing in embedded systems.

## Features

- Seamless integration with PlatformIO projects
- `print` and `println` functions for various data types
- Compatible with J-Link debug and trace probes

## Installation

To use the JLinkSWO library in your PlatformIO project, add the following lines to your `platformio.ini` file:

```.ini
lib_deps:
   https://github.com/NAMeC-SSL/JLinkSWO.git
```

Ensure you have installed [all J-Link software](https://www.segger.com/downloads/jlink/).

## Usage

To use the JLinkSWO library in your code, include the swo.h header and create an instance of the swo::SWO class:

```cpp
#include <mbed.h>
#include <swo.h>

static swo::SWO swo;

int main() {
   swo.println("Hello, World!");
}
```

## Example

To monitor SWO output via J-Link debug and trace probe, execute JLinkSWOViewer with your device name, and CPU frequency e.g.:

```bash
JLinkSWOViewer -device STM32L4A6RG -cpufreq 80000000
```

## Acknowledgments

This library is a fork of the [SWO Library](https://gitlab.com/catie_6tron/swo) with improvements and updates.

## Licence

This library is licensed under the Apache License, Version 2.0.
