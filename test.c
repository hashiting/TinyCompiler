int do_math(int a) {
  int x = a * 5;
  return x;
}

int main(){
    int a = 2;
    double b = 1 + 0.0;
    if( a < b ){
        int x = 3.2;
        b = x;
    }else{
        a = a < 2;
    }
    for( a=0; a<1; a=a+1){
        b = 3;
    }

    while( a<2 ){
        b = 2;
    }

    int c = do_math(1);
    return c;
}