add_executable(test_string main_string.cc)
add_executable(test_string2 simple_test.cc)
target_link_libraries(test_string LINK_PUBLIC printer)
# target_link_libraries(test_string2 LINK_PUBLIC printer)