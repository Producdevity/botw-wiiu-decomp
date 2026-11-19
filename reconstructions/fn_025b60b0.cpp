#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048bd10;
extern "C" RuntimeTag data_1048bd14;
extern "C" const RuntimeVTable data_100ebe8c;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_100ebe7c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100ebe6c;

typedef Token<&data_1048bd10, &data_1048bd14, &data_100ebe8c> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_100ebe7c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100ebe6c> Type2;

extern "C" bool fn_025b60b0(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
