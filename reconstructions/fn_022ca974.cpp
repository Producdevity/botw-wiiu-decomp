#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10489890;
extern "C" RuntimeTag data_10489894;
extern "C" const RuntimeVTable data_10076440;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10076430;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10076420;

typedef Token<&data_10489890, &data_10489894, &data_10076440> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10076430> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10076420> Type2;

extern "C" bool fn_022ca974(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
