# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CMakeFiles\\MatrixSolver_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\MatrixSolver_autogen.dir\\ParseCache.txt"
  "MatrixSolver_autogen"
  )
endif()
