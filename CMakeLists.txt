cmake_minimum_required(VERSION 3.10)
project(ADASRealTimeSystem)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 17)

# Include the Context-Aware-Real-Time-System submodule
add_subdirectory(lib/context_aware_real_time_system)

# Add ADAS-specific include directories
include_directories(include)
include_directories(lib/context_aware_real_time_system/abstract/include)

# Add ADAS source files
add_library(adas_real_time_system
    src/ADASRealTimeSystem.cpp
)

# Link the context-aware system with ADAS real-time system
target_link_libraries(adas_real_time_system context_aware_real_time_system)

# Add example executable
add_executable(adasExample examples/adasExample.cpp)

# Link the ADAS system library and the context-aware system library to the example
target_link_libraries(adasExample adas_real_time_system context_aware_real_time_system)
