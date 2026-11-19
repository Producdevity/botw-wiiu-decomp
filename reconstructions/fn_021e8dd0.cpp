#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10488854;
extern "C" RuntimeTag data_10488858;
extern "C" const RuntimeVTable data_1004c61c;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1004c60c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1004c5fc;

typedef Token<&data_10488854, &data_10488858, &data_1004c61c> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1004c60c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1004c5fc> Type2;

extern "C" bool fn_021e8dd0(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
