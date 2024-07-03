#include "iostream"
#include "algorithm"
#include "vector"

using namespace std;

class Item{
public:
    int weight;
    int value;
    Item(int weight,int value){
        this->value=value;
        this->weight=weight;
    }
};

bool cmp(Item a,Item b){
    return a.value/a.weight > b.value/b.weight;
}

double fractionalKnapsack(vector<int> &weight,vector<int> &value,int capacity){
    vector<Item> list;
    for (int i = 0; i < weight.size(); ++i) {
        list.push_back(Item(weight[i],value[i]));
    }
    sort(list.begin(), list.end(), cmp);
    double revenue=0;
    for (auto item:list) {
        double amt = min(1,capacity/item.weight);
        capacity -= amt;
        revenue += amt*item.value;
    }
    return revenue;
}

int main() {
    vector<int> value={60,100,120};
    vector<int> weight = {10,20,30};
    cout<<fractionalKnapsack(weight,value,50);
}