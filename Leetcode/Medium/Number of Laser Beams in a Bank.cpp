class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        // this is more of a maths / counting type problem
        // just count the total number of devices in rows which have atleats one of them
      
        int i,j,lasers=0,devicesInRow;
        vector<int> devices;
        for(i=0;i<=bank.size()-1;i++){
            devicesInRow=0;
            for(j=0;j<=bank[i].size()-1;j++){
                if(bank[i][j]=='1')
                    devicesInRow++;
            }
            if(devicesInRow>0)
                devices.push_back(devicesInRow);
        }
        // for total lasers, we multiply each row with devices to the next row with devices

        // NOTE : Use explicit array/vector size initialization because sometimees arr.size()-1/arr.size()-2 gives runtime error if < 0
        int devicesSize=devices.size();
        for(i=0;i<=devicesSize-2;i++){
            lasers+=devices[i]*devices[i+1];
        }
        return lasers;
    }
};
