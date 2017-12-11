file(GLOB Model "*.h" "*.cpp")

include_directories("${PROJECT_SOURCE_DIR}/src/Domain")

add_library(model ${Model})