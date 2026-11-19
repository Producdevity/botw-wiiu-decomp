#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048841c;
extern "C" RuntimeTag data_10488420;
extern "C" const RuntimeVTable data_1003f994;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1003f984;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1003f974;

typedef Token<&data_1048841c, &data_10488420, &data_1003f994> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1003f984> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1003f974> Type2;

extern "C" bool fn_021aff28(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
