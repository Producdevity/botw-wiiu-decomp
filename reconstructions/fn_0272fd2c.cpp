#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048ca4c;
extern "C" RuntimeTag data_1048ca48;
extern "C" const RuntimeVTable data_1011f888;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_1011f878;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1011f868;

typedef Token<&data_1048ca4c, &data_1048ca48, &data_1011f888> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_1011f878> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1011f868> Type2;

extern "C" bool fn_0272fd2c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
