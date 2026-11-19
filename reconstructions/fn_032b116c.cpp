#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048fd48;
extern "C" RuntimeTag data_10492c60;
extern "C" const RuntimeVTable data_102a47b4;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_102a47a4;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_102a4794;

typedef Token<&data_1048fd48, &data_10492c60, &data_102a47b4> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_102a47a4> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_102a4794> Type2;

extern "C" bool fn_032b116c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
