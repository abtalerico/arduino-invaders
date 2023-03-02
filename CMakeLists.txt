cmake_minimum_required(VERSION 3.24)
project("arduino invaders")

set(ARDUINO_DEFAULT_BOARD diecimila) # Default Board ID, when not specified
set(ARDUINO_DEFAULT_PORT /dev/ttyUSB0) # Default Port, when not specified




#====================================================================#
# Original blink sketch (from Arduino SDK examples)
#====================================================================#

# Some installations have renamed the example directories
if (EXISTS "${ARDUINO_SDK_PATH}/examples/01.Basics/Blink")
    set(BLINK_SKETCH "${ARDUINO_SDK_PATH}/examples/01.Basics/Blink")
else()
    set(BLINK_SKETCH "${ARDUINO_SDK_PATH}/examples/1.Basics/Blink")
endif()

generate_arduino_firmware(blink_original
        SKETCH "${BLINK_SKETCH}"
        PORT  /dev/ttyACM0
        SERIAL picocom @SERIAL_PORT@
        BOARD uno)

# Alternative: by variables
#set(blink_original_SKETCH "${BLINK_SKETCH}")
#set(blink_original_PORT  /dev/ttyACM)
#set(blink_original_SERIAL picocom @SERIAL_PORT@)
#set(blink_original_BOARD uno)
#
#generate_arduino_firmware(blink_original)
