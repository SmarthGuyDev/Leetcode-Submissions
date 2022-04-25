class UndergroundSystem {
public:
    unordered_map<int, pair<string, int>> checkin;
    unordered_map<string, pair<int, int>> checkout;
    UndergroundSystem() {
        
    }
    
    void checkIn(int id, string stationName, int t) {
        checkin[id] = {stationName, t}; 
    }
    
    void checkOut(int id, string stationName, int t) {
        auto path = checkin[id];
        checkin.erase(id);
        
        string pathName = path.first + "_" + stationName;
        checkout[pathName].first += t - path.second;
        checkout[pathName].second += 1;
        
    }
    
    double getAverageTime(string startStation, string endStation) {
        string routeName = startStation + "_" + endStation;
        auto& route = checkout[routeName];
        
        return (double)route.first / route.second;
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */