set(TEST_NAME sample_test_unity)
add_compile_definitions(TEST=true)
include(FetchContent)
set(SOURCE_FILES test_device_driver.c)

FetchContent_Declare(
        Unity
        GIT_REPOSITORY https://github.com/ThrowTheSwitch/Unity.git
        GIT_TAG        v2.5.2
)
set(UNITY_EXTENSION_FIXTURE ON CACHE BOOL "Enable Unity Fixture Extension")
set(UNITY_EXTENSION_MEMORY  ON CACHE BOOL "Enable Unity Memory Extension")
FetchContent_MakeAvailable(Unity)

#target_sources(${TEST_NAME} PRIVATE ${SOURCE_FILES})
add_executable(${TEST_NAME} test_device_driver.c)
target_link_libraries(${TEST_NAME} src unity)
add_test(test_unity ${TEST_NAME})
