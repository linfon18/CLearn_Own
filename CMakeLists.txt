cmake_minimum_required(VERSION 3.20)
project(CLearn_Own LANGUAGES C CXX)

set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED ON)

if(MSVC)
    add_compile_options(/utf-8)
endif()

file(GLOB exercises CONFIGURE_DEPENDS
    RELATIVE "${CMAKE_CURRENT_SOURCE_DIR}"
    "*.[cC]" "*.[cC][pP][pP]"
)

foreach(exercise IN LISTS exercises)
    get_filename_component(exercise_name "${exercise}" NAME_WLE)
    get_filename_component(extension "${exercise}" LAST_EXT)
    string(TOLOWER "${extension}" extension)
    if(extension STREQUAL ".c")
        set_source_files_properties("${exercise}" PROPERTIES LANGUAGE C)
    else()
        set_source_files_properties("${exercise}" PROPERTIES LANGUAGE CXX)
    endif()
    add_executable("${exercise_name}" "${exercise}")
endforeach()
