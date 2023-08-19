class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int i,count=0;
        string itemType,itemColour,itemName;
        for(i=0;i<items.size();i++){
            itemType=items[i][0];
            itemColour=items[i][1];
            itemName=items[i][2];
            if(ruleKey=="type"&&itemType==ruleValue||ruleKey=="color"&&itemColour==ruleValue||ruleKey=="name"&&itemName==ruleValue)
                count++;
        }
        return count;
    }
};
