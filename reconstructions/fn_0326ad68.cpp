#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048fe34;
extern "C" RuntimeTag data_1049292c;
extern "C" const RuntimeVTable data_1029b270;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1029b260;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1029b250;

typedef Token<&data_1048fe34, &data_1049292c, &data_1029b270> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1029b260> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1029b250> Type2;

extern "C" bool fn_0326ad68(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
