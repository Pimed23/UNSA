data Aceleracion = Aceleracion Float Float Float
suma :: Aceleracion -> Float
suma ( Aceleracion f m r ) =  f / m  -  r * 10 
main = do 
    a <- readLn
    b <- readLn
    c <- readLn
    let c = suma ( Aceleracion a b c )
    print c