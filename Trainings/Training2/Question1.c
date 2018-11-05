int bigger_sum(int a, int b, int c) {

    int first,second;

    if(a>b && a>c){

        first=a;

        if(b>c){

            second=b;

        }else{

            second=c;

        }   

    }else if (b>a && b>c){

        first =b;

        if(a>c){

            second=a;

        }else{

            second=c;

        }

    }else{

        first=c;

        if(a>b){

            second=a;

        }else{

            second=b;

        }

    }

    return (first*first)+(second*second);

}

