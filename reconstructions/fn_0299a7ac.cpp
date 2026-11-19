#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048e374;
extern "C" RuntimeTag data_1048e370;
extern "C" const RuntimeVTable data_10175f60;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_10175f50;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10175f40;

typedef Token<&data_1048e374, &data_1048e370, &data_10175f60> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_10175f50> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10175f40> Type2;

extern "C" bool fn_0299a7ac(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
