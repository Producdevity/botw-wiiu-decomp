extern "C" int fn_0326ff08(void*);
struct StateRecordRef;
extern "C" bool fn_0378c788(const StateRecordRef *);
extern "C" int fn_0378c7b0(void *);

namespace {
struct Object {
    char padding_0[8];
    char first[8];
    char second[1];
};
}

extern "C" int fn_0326ff48(void *object) {
    if (fn_0326ff08(object) != 0 &&
        (fn_0378c788((const StateRecordRef *) ((Object *) object)->first) != 0 || fn_0378c7b0(((Object *) object)->first) != 0) &&
        (fn_0378c788((const StateRecordRef *) ((Object *) object)->second) != 0 || fn_0378c7b0(((Object *) object)->second) != 0)) {
        return 1;
    }
    return 0;
}
