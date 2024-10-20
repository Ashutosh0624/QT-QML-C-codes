# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\casting_ex_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\casting_ex_autogen.dir\\ParseCache.txt"
  "casting_ex_autogen"
  )
endif()
