cmake_minimum_required(VERSION 3.10)
project(InterviewAssessment)

# Check if GCC is installed
find_program(GCC_EXECUTABLE gcc)

if(NOT GCC_EXECUTABLE)
    message(STATUS "GCC not found. Attempting to install GCC.")
    
    # Check the system's package manager and attempt to install GCC
    if(UNIX)
        find_program(APT_EXECUTABLE apt)
        if(APT_EXECUTABLE)
            execute_process(COMMAND ${APT_EXECUTABLE} install gcc)
        else()
            message(FATAL_ERROR "Could not find apt. Please install GCC manually.")
        endif()
    elseif(APPLE)
        message(FATAL_ERROR "GCC not found. Please install GCC manually.")
    else()
        message(FATAL_ERROR "Unsupported platform. Please install GCC manually.")
    endif()
endif()

# Add the executable
add_executable(interview_assessment interview_assessment.c)

# Set the output directory for the executable
set_target_properties(interview_assessment PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/build
)
