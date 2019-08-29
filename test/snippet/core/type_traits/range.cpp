#include <seqan3/core/type_traits/range.hpp>

int main()
{
    // these evaluate to true:
    static_assert(seqan3::Compatible<std::string,              std::vector<char>>);
    static_assert(seqan3::Compatible<std::vector<std::string>, std::vector<std::vector<char>>>);
}
