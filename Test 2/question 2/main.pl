$num = 25 ;
sub func(){
return $num;
}

sub static{
 my $num =2 ;
 return func();
}

sub dymic{
 local $num =2 ;
 return func();
}

print "static scope ", static(), "\n";
print "dynamic scope ", dymic(), "\n";