

public class RootFinder
{
    int n;

    RootFinder(int n)
    {
        this.n = n;
    }

    double f(double w, double g)
    {
        return (Math.pow(g,n) - w);
    }

    double fPrime(double g)
    {
        return (n * Math.pow(g, n-1));
    }

    boolean closeEnough(double a, double b)
    {
        return (Math.abs(a-b) < Math.abs(b * 0.0001));
    }

    double findRoot(double w, double g)
    {
        System.out.println("  guessing " + g);

        double newGuess = g - f(w,g) / fPrime(g);

        if (closeEnough(newGuess, g))
            return newGuess;
        else
            return findRoot(w, newGuess);
    }

    public double root(double w)
    {
        return findRoot(w,1);
    }
}