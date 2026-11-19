#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048fe40;
extern "C" RuntimeTag data_1049325c;
extern "C" const RuntimeVTable data_102b401c;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_102b400c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_102b3ffc;

typedef Token<&data_1048fe40, &data_1049325c, &data_102b401c> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_102b400c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_102b3ffc> Type2;

extern "C" bool fn_033489e0(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
