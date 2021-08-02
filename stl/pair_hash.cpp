#include <unordered_map>
#include <iostream>
#include <tuple>
#include <vector>
#include <functional>

struct pair_hash {
    size_t operator()(std::pair<int,int> p) const noexcept {
        return std::hash<int>{}(p.first) ^ (std::hash<int>{}(p.second) << 1);
    }
};

int main() {
    std::unordered_map<std::pair<int,int>,std::vector<int>,pair_hash> map;
    std::pair<int,int> p{1,1};
    map[p].push_back(1);
    map[p].push_back(2);
    map[p].push_back(3);
    for (const auto n : map[p]) {
        std::cout << n << " ";
    }
    std::cout << "\n";
    return 0;
}