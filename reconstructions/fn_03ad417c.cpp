#include "botw/named_record.h"
#include "botw/safe_string.h"

extern "C" void* fn_0308e578(unsigned size);
extern "C" void fn_03ad4148(NamedRecord* record, const SafeString* name);
extern "C" const unsigned char data_1036cadc;
extern "C" const SafeString data_10549fec;

extern "C" NamedRecord* fn_03ad417c(NamedRecord* record) {
    if (!record) {
        record = static_cast<NamedRecord*>(fn_0308e578(sizeof(NamedRecord)));
        if (!record)
            return record;
    }
    record->vtable = &data_1036cadc;
    record->field00 = 0;
    record->field04 = 0;
    record->field08 = 0;
    record->field0C = 0;
    record->field14 = 0;
    record->field18 = 0;
    fn_03ad4148(record, &data_10549fec);
    return record;
}
