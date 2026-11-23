namespace {

struct Target {
    unsigned char unknown00[0xC];
    unsigned int serial;
};

struct TargetLink {
    Target* target;
    unsigned int serial;

    bool isValid() const { return target != 0 && target->serial == serial; }
};

struct TargetLinkPair {
    TargetLink first;
    TargetLink second;
};

}  // namespace

extern "C" bool fn_0383f634(const TargetLinkPair* pair) {
    return pair->first.isValid() || pair->second.isValid();
}
