a = gets.to_f
b = gets.to_f
c = gets.to_f

delta = b ** 2 - 4 * a * c 

    if delta > 0.0
        delta_Sqrt = Math.sqrt(delta)

        p, q = (-b - delta_Sqrt) / 2 * a, (-b + delta_Sqrt) / 2 * a 

        print "iki reel kök vardır; bunlar: (#{p}, #{q})"

    elsif delta == 0.0

        r = -b /( 2 * a )

        print "çakışık reel kök vardır; bu: (#{r})"
    else 
        print "reel kök yoktur"
    end
