cmake_minimum_required (VERSION 3.29.3)

include(FetchContent)

FetchContent_Declare(smk GIT_REPOSITORY https://github.com/ArthurSonzogni/smk.git)
FetchContent_GetProperties(smk)
if(NOT smk_POPULATED)
  FetchContent_Populate(smk)
  add_subdirectory(${smk_SOURCE_DIR} ${smk_BINARY_DIR} EXCLUDE_FROM_ALL)
endif()

project(Example
  LANGUAGES CXX
  VERSION 0.1.0
)

add_executable(main main.cpp)
target_link_libraries(main smk)
