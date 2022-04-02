#include <iostream>
#include <vector>
#define BOOST_JSON_STACK_BUFFER_SIZE 1024
#include <boost/json/src.hpp>
#include <boost/json.hpp>

using namespace boost::json;

  extern "C" int LLVMFuzzerTestOneInput(const uint8_t *data, size_t size) {
    try {
        string s(data, data+size);
        string_view sv = s;
        auto parsed_data = parse(sv);

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;

}
