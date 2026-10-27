for(int cf = 2; cf * cf <= n && !found_factor; cf++){
    if(n % cf == 0){
        found_factor = true;
    }
}