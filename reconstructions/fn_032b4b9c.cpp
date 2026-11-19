#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048fd78;
extern "C" RuntimeTag data_10492c80;
extern "C" const RuntimeVTable data_102a5358;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_102a5348;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_102a5338;

typedef Token<&data_1048fd78, &data_10492c80, &data_102a5358> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_102a5348> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_102a5338> Type2;

extern "C" bool fn_032b4b9c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
