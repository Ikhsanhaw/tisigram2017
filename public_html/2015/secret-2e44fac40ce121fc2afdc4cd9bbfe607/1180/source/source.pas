
var
 a,b,c,hasil : string;
 na,nb,nc,i : integer;
 n : real;
begin


    readln(a);
    readln(b);
    readln(c);
    case (a) of
      'E' : na:=1;
      'D' : na:=2;
      'C' : na:=3;
      'B' : na:=4;
      'A' : na:=5;
      'S' : na:=6;
    end;
    case (b) of
      'E' : nb:=1;
      'D' : nb:=2;
      'C' : nb:=3;
      'B' : nb:=4;
      'A' : nb:=5;
      'S' : nb:=6;
    end;
    case (c) of
      'E' : nc:=1;
      'D' : nc:=2;
      'C' : nc:=3;
      'B' : nc:=4;
      'A' : nc:=5;
      'S' : nc:=6;
    end;
       n := (na + nb + nc)/ 3;

       if n=1 then
          hasil :='E'
       else if (n>1) and (n<1.5) then
          hasil :='-E'
       else if (n>1.5) and (n<2) then
          hasil := 'D-'
       else if (n=2) then
          hasil := 'D'
       else if (n>2) and (n<2.5) then
          hasil := 'D+'
        else if (n>2.5) and (n<3) then
          hasil := 'C-'
       else if (n=3) then
          hasil := 'C'
       else if (n>3) and (n<3.5) then
          hasil := 'C+'
       else if (n>3.5) and (n<4) then
          hasil := 'B'
       else if (n=4) then
          hasil := 'B'
       else if (n>4) and (n<4.5) then
          hasil := 'B+'
        else if (n>4.5) and (n<5) then
          hasil := 'A-'
       else if (n=5) then
          hasil := 'A'
       else if (n>5) and (n<5.5) then
          hasil := 'A+'
        else if (n>5.5) and (n<6) then
          hasil := 'S-'
       else if (n=6) then
          hasil := 'S';
     writeln(hasil);
     end.
