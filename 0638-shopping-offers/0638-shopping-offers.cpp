class Solution{
public:
map<vector<int>,int> memo;
int shoppingOffers(vector<int>& price,vector<vector<int>>& special,vector<int>& needs){
if(memo.count(needs))return memo[needs];
int n=price.size(),cost=0;
for(int i=0;i<n;i++)cost+=price[i]*needs[i];
for(auto &sp:special){
vector<int> nxt=needs;
bool ok=1;
for(int i=0;i<n;i++){
if(sp[i]>nxt[i]){ok=0;break;}
nxt[i]-=sp[i];
}
if(ok)cost=min(cost,sp[n]+shoppingOffers(price,special,nxt));
}
return memo[needs]=cost;
}
};