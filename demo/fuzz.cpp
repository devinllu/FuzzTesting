#include <iostream>
#include <vector>

#include "cjson.h"

int main(int argc, char** argv) {
    const char* js = R"({
    "table":"orderBookL2_25",
    "action":"insert",
    "data":[
        {
            "symbol":"XBTUSD",
            "id":8796514950,
            "side":"Buy",
            "size":10000,
            "price":34850.5
        },
        {
            "symbol":"XBTUSD",
            "id":8796515700,
            "side":"Buy",
            "size":281,
            "price":34843
        }
    ]
})";

    cJSON *json = cJSON_Parse(js);
}

