/*
public class PrinterSim 
{
private static final int NUM_JOBS = 100;
private static PrintJob[] jobsArray;
private static int time;
public PrinterSim(int numJobs) 
{
jobsArray = new PrintJob[numJobs];
for (int i = 0; i < numJobs; i++) 
{
jobsArray[i] = new PrintJob(i + 1, (int) (Math.random() * 50 + 1));
}
}
public void runOnePrinterSim() 
{
Printer printerA = new Printer("Printer");
time = 0;
int nextJob = 0;
while (nextJob < NUM_JOBS) 
{
if (time % 60 == 0) {
printerA.addJob(jobsArray[nextJob]);
System.out.println("(" + getFormattedTime() + ")  \t"+ jobsArray[nextJob] + " sent to Printer.");
nextJob++;
}
time++;
printerA.update();
}
while (printerA.hasMoreJobs()) 
{
time++;
printerA.update();
}
System.out.println("\nTotal Simulation Time (One System Printer): "+ getFormattedTime() + "\n");
}
public void runTwoPrinterSim() 
{
Printer printerA = new Printer("Printer A");
Printer printerB = new Printer("Printer B");
time = 0;
int nextJob = 0;
while (nextJob < NUM_JOBS) 
{
if (time % 60 == 0) 
{
if (printerA.compareTo(printerB) <= 0) 
{
printerA.addJob(jobsArray[nextJob]);
System.out.println("(" + getFormattedTime() + ")  \t"+ jobsArray[nextJob] + " sent to Printer A.");
} 
else 
{
printerB.addJob(jobsArray[nextJob]);
System.out.println("(" + getFormattedTime() + ")  \t"+ jobsArray[nextJob] + " sent to Printer B.");
}
nextJob++;
}
time++;
printerA.update();
printerB.update();
}
while (printerA.hasMoreJobs() || printerB.hasMoreJobs()) 
{
time++;
printerA.update();
printerB.update();
}
System.out.println("\nTotal Simulation Time (Two System Printers): "+ getFormattedTime() + "\n");
}
public void runThreePrinterSim() 
{
Printer printerA = new Printer("Printer A");
Printer printerB = new Printer("Printer B");
Printer printerC = new Printer("Printer C");
time = 0;
int nextJob = 0;
while (nextJob < NUM_JOBS) 
{
if (time % 60 == 0) 
{
if (printerA.compareTo(printerB) <= 0&& printerA.compareTo(printerC) <= 0) 
{
printerA.addJob(jobsArray[nextJob]);
System.out.println("(" + getFormattedTime() + ")  \t"+ jobsArray[nextJob] + " sent to Printer A.");
} 
else if (printerB.compareTo(printerC) <= 0&& printerB.compareTo(printerA) <= 0) 
{
printerB.addJob(jobsArray[nextJob]);
System.out.println("(" + getFormattedTime() + ")  \t"+ jobsArray[nextJob] + " sent to Printer B.");
} 
else 
{
printerC.addJob(jobsArray[nextJob]);
System.out.println("(" + getFormattedTime() + ")  \t"+ jobsArray[nextJob] + " sent to Printer C.");
}
nextJob++;
}
time++;
printerA.update();
printerB.update();
printerC.update();
}
while (printerA.hasMoreJobs() || printerB.hasMoreJobs()|| printerC.hasMoreJobs()) 
{
time++;
printerA.update();
printerB.update();
printerC.update();
}
System.out.println("\nTotal Simulation Time (Three System Printers): "+ getFormattedTime() + "\n");
}
public static String formatTime(int seconds) 
{
int h = seconds / 3600;
seconds %= 3600;
int m = seconds / 60; 
int s = seconds % 60; 
if (h > 0) 
{
return String.format("%d:%02d:%02d", h, m, s); 
} 
else 
{
return String.format("%d:%02d", m, s);
}
}
public static String getFormattedTime() 
{
return formatTime(time);
}
public static void main(String[] args) 
{
PrinterSim sim = new PrinterSim(NUM_JOBS);
System.out.println("\nSimulation using One System Printer:\n");
sim.runOnePrinterSim();
System.out.println("\nSimulation using Two System Printers (A, B):\n");
sim.runTwoPrinterSim();System.out.println("\nSimulation using Three System Printers (A, B, C):\n");
sim.runThreePrinterSim();
}
}


*/