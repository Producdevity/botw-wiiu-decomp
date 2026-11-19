#ifndef BOTW_VIRTUAL_CHILD_FORWARDING_H
#define BOTW_VIRTUAL_CHILD_FORWARDING_H

namespace virtual_child_forwarding {

struct ReceiverStorage {
    unsigned char storage[12];
};

struct Receiver : ReceiverStorage {
    virtual void reserved_slot_12();
    virtual void reserved_slot_20();
    virtual void reserved_slot_28();
    virtual bool test_slot_36();
    virtual bool test_slot_44();
    virtual bool test_slot_52();
    virtual void reserved_slot_60();
    virtual void reserved_slot_68();
    virtual void reserved_slot_76();
    virtual void reserved_slot_84();
    virtual void reserved_slot_92();
    virtual void reserved_slot_100();
    virtual void reserved_slot_108();
    virtual void reserved_slot_116();
    virtual void reserved_slot_124();
    virtual void reserved_slot_132();
    virtual void reserved_slot_140();
    virtual void reserved_slot_148();
    virtual void reserved_slot_156();
    virtual void reserved_slot_164();
    virtual void reserved_slot_172();
    virtual void reserved_slot_180();
    virtual void reserved_slot_188();
    virtual void reserved_slot_196();
    virtual void reserved_slot_204();
    virtual Receiver* get_next() const;
};

}

#endif
