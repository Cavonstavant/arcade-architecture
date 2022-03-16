set(INCLUDE_ROOT ${PROJECT_SOURCE_DIR}/src/core)
set(SOURCE_ROOT ${PROJECT_SOURCE_DIR}/src/core)

set(TARGET_LIB_NAME libarcade_core)
set(TARGET_EXEC_NAME arcade)

set(SRC
    ${INCLUDE_ROOT}/core.hpp
    ${INCLUDE_ROOT}/core.cpp
)

set_target_properties(${TARGET_LIBNAME} PROPERTIES LINKER_LANGUAGE CXX)

add_library(${TARGET_LIB_NAME} ${SRC})

target_link_libraries(${TARGET_LIB_NAME} PRIVATE arcade_commonInterface dl)

add_executable(${TARGET_EXEC_NAME} ${SOURCE_ROOT}/entryPoint.cpp)

target_link_libraries(${TARGET_EXEC_NAME} PRIVATE ${TARGET_LIB_NAME})

add_custom_command(TARGET ${TARGET_EXEC_NAME}
    POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_FILE:${TARGET_EXEC_NAME}> ${PROJECT_SOURCE_DIR}
)