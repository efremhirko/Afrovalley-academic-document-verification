import javax.swing.*;
import java.awt.*;
import java.io.BufferedWriter;
import java.io.FileWriter;
import java.io.IOException;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

/*            BULE HORA UNIVERSITY
                 COLLAGE OF INFORMATICS
             DEPARTMENT OF SOFTWARE ENGINEERING

           Course Title: mobile Application development
           Course Code: SWENG-3105

          Individual Assignment
	      Name	    			ID-No
          Ephrem Hirko (SWE)    Ru1360/12

                                       Submission
                                  To Instructor:  Dedefo B.
                                  Date:18/9/2014
                                  Bule Hora
 */
public class StudentRegistrationFormByEfrem extends JFrame {
    private final Label l2;
    private final Label l3;
    private final Label l4;
    private final Label l5;
    private final Label l6;
    private final Label L7;
    private final Label L8;
    private final Label L9;
    private final Label L10;
    private final Label l11;
    private final TextField t1;
    private final TextField t2;
    private final TextField N;
    private final TextField T;
    private final TextField gpa;
    private final TextField col;
    private final JTextField l = new JTextField();
    private final JRadioButton male;
    private final JRadioButton female;
    private final ButtonGroup group;
    private final JTextArea a;
    public double d;
    //^[a-zA-Z_ ]*$
    public String PATTERN = "^[\\p{L} .'-]{5,50}+$", idn = "^(?=.*\\d)(?=.*[a-zA-Z])(?=.*[!@#&()–[{}]:;',?/*~$^+=<>]).{6,24}$", digit = "\\d*['.']?\\d*", phone = "^\\d{10}$";
    public Pattern pat = Pattern.compile(PATTERN);
    Pattern grade = Pattern.compile(digit);
    Pattern mat = Pattern.compile(idn);
    Pattern phon = Pattern.compile(phone);
    public Matcher match;
    public BufferedWriter writer;
    private final JComboBox < String > date;
    private final JComboBox < String > month;
    private final JComboBox < String > year;
    private final JComboBox < String > sem;

    StudentRegistrationFormByEfrem() {
        setLayout(null); //FlowLayout
        Color bg = new Color(192, 188, 190);
        this.setBackground(bg);
        //gui
        JLabel title = new JLabel("Registration Form");
        title.setFont(new Font("Arial", Font.PLAIN, 30));
        title.setSize(300, 30);
        title.setLocation(300, 30);
        setUndecorated(false);
        getRootPane().setBorder(BorderFactory.createMatteBorder(4, 4, 4, 4, Color.BLUE));
        title.setForeground(Color.black);
        add(title);

        l2 = new Label("Full Name: ");
        add(l2);
        //l2.setForeground(Color.WHITE);
        l2.setBounds(150, 80, 100, 15);
        l2.setFont(new Font("Arial", Font.BOLD, 15));
        t1 = new TextField(25);
        add(t1);
        t1.setBounds(250, 80, 150, 25);
        l3 = new Label("ID no: ");
        add(l3);
        l3.setForeground(Color.BLACK);
        l3.setBounds(150, 130, 100, 15);
        l3.setFont(new Font("Arial", Font.BOLD, 15));
        t2 = new TextField(25);
        add(t2);
        t2.setBounds(250, 130, 150, 25);
        l4 = new Label("Nationality: ");
        add(l4);
        l4.setForeground(Color.BLACK);
        l4.setBounds(150, 180, 100, 15);
        l4.setFont(new Font("Arial", Font.BOLD, 15));

        N = new TextField(25);
        add(N);
        N.setBounds(250, 180, 150, 25);
        l5 = new Label("Address: ");
        l5.setFont(new Font("Arial", Font.BOLD, 15));
        l5.setBounds(150, 230, 100, 15);
        l5.setForeground(Color.BLACK);
        add(l5);
        a = new JTextArea();
        a.setFont(new Font("Arial", Font.PLAIN, 15));
        a.setBounds(250, 230, 200, 75);
        a.setLineWrap(false);
        add(a);
        l6 = new Label("Tel no:");
        add(l6);
        l6.setForeground(Color.BLACK);
        l6.setBounds(150, 330, 100, 15);
        l6.setFont(new Font("Arial", Font.BOLD, 15));
        T = new TextField(25);
        add(T);
        T.setBounds(250, 330, 150, 25);
        T.setFont(new Font("Arial", Font.BOLD, 12));
        L7 = new Label("Gender: ");
        add(L7);
        L7.setForeground(Color.BLACK);
        L7.setBounds(150, 380, 100, 15);
        L7.setFont(new Font("Arial", Font.BOLD, 15));
        male = new JRadioButton(" male");
        female = new JRadioButton(" female");
        male.setForeground(Color.black);
        male.setBounds(400, 380, 100, 20);
        female.setForeground(Color.black);
        female.setBounds(250, 380, 100, 20);
        group = new ButtonGroup();
        group.add(male);
        group.add(female);
        this.add(male);
        this.add(female);
        this.pack();
        L8 = new Label("College: ");
        add(L8);
        L8.setForeground(Color.BLACK);
        L8.setBounds(150, 430, 100, 15);
        L8.setFont(new Font("Arial", Font.BOLD, 15));
        col = new TextField(25);
        add(col);
        col.setBounds(250, 430, 150, 25);
        col.setFont(new Font("Arial", Font.BOLD, 12));

        L9 = new Label("Academic_year: ");
        L9.setForeground(Color.BLACK);
        L9.setFont(new Font("Arial", Font.BOLD, 15));
        L9.setBounds(150, 480, 110, 20);
        add(L9);

        String[] dates = {
                "1", "2", "3", "4", "5", "6",
                "7", "8", "9", "10", "11", "12",
                "13", "14", "15", "16", "17", "18",
                "19", "20", "21", "22", "23", "24",
                "25", "26", "27", "28", "29", "30",
                "31"
        };
        date = new JComboBox < > (dates);
        date.setFont(new Font("Arial", Font.PLAIN, 15));
        date.setBounds(270, 480, 50, 20);
        add(date);

        String[] months = {
                "1", "2", "3", "4",
                "5", "6", "7", "8",
                "9", "10", "11", "12"
        };
        month = new JComboBox < > (months);
        month.setFont(new Font("Arial", Font.PLAIN, 15));
        month.setBounds(320, 480, 70, 20);
        add(month);

        String[] years = {
                "2014", "2015", "2016", "2017",
                "2018", "2019", "2020", "2021",
                "2022", "2023", "2024", "2025",
                "2026", "2027", "2028", "2029",
                "2030"
        };
        year = new JComboBox < > (years);
        year.setFont(new Font("Arial", Font.PLAIN, 15));
        year.setBounds(390, 480, 70, 20);
        add(year);

        String[] semester = {
                "1",
                "2",
        };
        sem = new JComboBox < > (semester);
        sem.setFont(new Font("Arial", Font.PLAIN, 15));
        sem.setBounds(460, 480, 60, 20);
        add(sem);

        L10 = new Label("GPA: ");
        add(L10);
        L10.setForeground(Color.BLACK);
        L10.setBounds(150, 530, 100, 15);
        L10.setFont(new Font("Arial", Font.BOLD, 15));
        gpa = new TextField(25);
        add(gpa);
        gpa.setBounds(250, 530, 150, 25);
        gpa.setFont(new Font("Arial", Font.BOLD, 12));
        l11 = new Label("Department: ");
        add(l11);
        l11.setForeground(Color.BLACK);
        l11.setBounds(150, 580, 100, 15);
        l11.setFont(new Font("Arial", Font.BOLD, 15));
        l.setBounds(250, 580, 200, 20);
        l.setEditable(false);
        add(l);
        Button b1 = new Button("Register");
        b1.setFont(new Font("Arial", Font.BOLD, 20));
        b1.setBackground(Color.green);
        add(b1);
        b1.setBounds(200, 630, 100, 50);

        b1.addActionListener(e -> {
            l.setVisible(true);
            if (t1.getText().isEmpty()) {
                JOptionPane.showMessageDialog(null, "name can not be null");
                return;
            }
            match = pat.matcher(t1.getText());
            if (!match.matches()) {
                JOptionPane.showMessageDialog(null, "name should be character and 5<name>30");
                return;
            }
            if (t2.getText().isEmpty()) {
                JOptionPane.showMessageDialog(null, "ID number can't be null");
                return;
            }
            match = mat.matcher(t2.getText());
            if (!match.matches()) {
                JOptionPane.showMessageDialog(null, "ID number should include\nat least one special character\none letter\nand one digit\nlength 6<=ID<=30");
                return;
            }
            if (N.getText().isEmpty()) {
                JOptionPane.showMessageDialog(null, "nationality can't be null");
                return;
            }
            match = pat.matcher(N.getText());
            if (!match.matches()) {
                JOptionPane.showMessageDialog(null, "nationality should be text and\nlength 5 up to 30 is allowed!");
                return;
            }
            if (a.getText().isEmpty()) {
                JOptionPane.showMessageDialog(null, "Address  is mandatory");
                return;
            }
            match = pat.matcher(a.getText());
            if (!match.matches()) {
                JOptionPane.showMessageDialog(null, "Address should be text and\nlength 5 up to 30 is allowed! ");
                return;
            }
            if (T.getText().isEmpty()) {
                JOptionPane.showMessageDialog(null, "phone can't be null");
                return;
            }
            match = phon.matcher(T.getText());
            if (!match.matches()) {
                JOptionPane.showMessageDialog(null, "phone should be ten digit number\nlength should be equal to ten");
                return;
            }
            if (group.isSelected(null)) {
                JOptionPane.showMessageDialog(null, "gender should be selected");
                return;
            }
            if (col.getText().isEmpty()) {
                JOptionPane.showMessageDialog(null, "college should be filed");
                return;
            }
            match = pat.matcher(col.getText());
            if (!match.matches()) {
                JOptionPane.showMessageDialog(null, "college should be text\nlength 5 up to 30 is allowed!");
                return;
            }
            if (gpa.getText().isEmpty()) {
                JOptionPane.showMessageDialog(null, "GPA mandatory!");
                return;
            }
            match = grade.matcher(gpa.getText());
            if (!match.matches()) {
                JOptionPane.showMessageDialog(null, "gpa should be positive number");
                return;
            } else {
                d = Double.parseDouble(gpa.getText());
            }
            if (d >= 3.5 && d <= 4.0) {
                try {
                    l.setText("software engineering");
                    writer = new BufferedWriter(new FileWriter("software.txt", true));
                    myMethod();
                } catch (IOException ex) {
                    throw new RuntimeException(ex);
                }
                JOptionPane.showMessageDialog(null, "you registered to software engineering");
            } else if (d >= 3 && d < 3.5) {
                l.setText("computer science");
                try {
                    writer = new BufferedWriter(new FileWriter("science.txt", true));
                    myMethod();
                } catch (IOException ex) {
                    throw new RuntimeException(ex);
                }
                JOptionPane.showMessageDialog(null, "according to your GPA \nyou registered to computer science");
            } else if (d >= 2.5 && d < 3) {
                l.setText("information technology");
                try {
                    writer = new BufferedWriter(new FileWriter("IT.txt", true));
                    myMethod();
                } catch (IOException ex) {
                    throw new RuntimeException(ex);
                }
                JOptionPane.showMessageDialog(null, "you registered to information technology");
            } else if (d >= 2 && d < 2.5) {
                l.setText("information system");
                try {
                    writer = new BufferedWriter(new FileWriter("system.txt", true));
                    myMethod();
                } catch (IOException ex) {
                    throw new RuntimeException(ex);
                }
                JOptionPane.showMessageDialog(null, "you registered to information system");
            } else if (d >= 0 && d < 2) {
                JOptionPane.showMessageDialog(null, "you failed!");
            } else if (d < 0 || d > 4) {
                JOptionPane.showMessageDialog(null, "no such kind of grade!");
            }
        });
        Button b2 = new Button("Reset");
        b2.setFont(new Font("Arial", Font.BOLD, 20));
        b2.setBackground(Color.red);
        add(b2);
        b2.setBounds(400, 630, 100, 50);
        b2.addActionListener(e -> {
            if (t1.getText().isEmpty() && t2.getText().isEmpty() && N.getText().isEmpty() && a.getText().isEmpty() && T.getText().isEmpty() && col.getText().isEmpty() && gpa.getText().isEmpty()) {
                JOptionPane.showMessageDialog(null, "no data to reset");
            }
            if (!t1.getText().isEmpty()) {
                t1.setText("");
            }
            if (!t2.getText().isEmpty()) {
                t2.setText("");
            }
            if (!N.getText().isEmpty()) {
                N.setText("");
            }
            if (!a.getText().isEmpty()) {
                a.setText("");
            }
            if (!T.getText().isEmpty()) {
                T.setText("");
            }
            if (!gpa.getText().isEmpty()) {
                gpa.setText("");
            }
            if (!col.getText().isEmpty()) {
                col.setText("");
            }
            if (date.getSelectedItem() != null) {
                date.setSelectedIndex(0);
            }
            if (month.getSelectedItem() != null) {
                month.setSelectedIndex(0);
            }
            if (!l.getText().isEmpty()) {
                l.setText("");
            }
            if (year.getSelectedItem() != null) {
                year.setSelectedIndex(0);
            }
            if (sem.getSelectedItem() != null) {
                sem.setSelectedIndex(0);
            }
            if (!l.getText().isEmpty()) {
                l.setText("");
            }

        });
        setVisible(true); //make frame visible
        setSize(800, 800); //make size of frame
        setTitle("Registration Form"); // title of frame
        setResizable(false); //
        Button b3 = new Button("ReadData");
        b3.setFont(new Font("Arial", Font.BOLD, 20));
        b3.setBackground(Color.green);
        add(b3);
        b3.setBounds(600, 630, 100, 50);
        b3.addActionListener(e -> {
            setVisible(false);
            File_reader fileReader = new File_reader();
        });
    }
    public void myMethod() {

        try {
            writer.write("--------------------------------------------------------\n");
            writer.write("| " + l2.getText() + "       " + t1.getText() + "\n");
            writer.write("--------------------------------------------------------\n");
            writer.write("| " + l3.getText() + "           " + t2.getText() + "\n");
            writer.write("--------------------------------------------------------\n");
            writer.write("| " + l4.getText() + "     " + N.getText() + "\n");
            writer.write("--------------------------------------------------------\n");
            writer.write("| " + l5.getText() + "         " + a.getText() + "\n");
            writer.write("--------------------------------------------------------\n");
            writer.write("| " + l6.getText() + "           " + T.getText() + "\n");
            writer.write("--------------------------------------------------------\n");
            if (male.isSelected()) {
                writer.write("| " + L7.getText() + "         " + male.getText() + "\n");
                writer.write("--------------------------------------------------------\n");
            } else if (female.isSelected()) {
                writer.write("| " + L7.getText() + "         " + female.getText() + "\n");
                writer.write("--------------------------------------------------------\n");
            }
            writer.write("| " + L8.getText() + "         " + col.getText() + "\n");
            writer.write("--------------------------------------------------------\n");
            writer.write("| " + L9.getText() + "   " + date.getSelectedItem() + "/" + month.getSelectedItem() + "/" + year.getSelectedItem() + "\n");
            writer.write("--------------------------------------------------------\n");
            writer.write("| Semester: " + "        " + sem.getSelectedItem() + "\n");
            writer.write("--------------------------------------------------------\n");
            writer.write("| " + L10.getText() + "             " + gpa.getText() + "\n");
            writer.write("--------------------------------------------------------\n");
            writer.write("| " + l11.getText() + "      " + l.getText() + "\n");
            writer.write("--------------------------------------------------------\n");
            writer.write("\n*=============================================*\n");
            writer.close();
        } catch (IOException ex) {
            throw new RuntimeException(ex);
        }
    }
    public static void main(String[] args) {
        StudentRegistrationFormByEfrem r = new StudentRegistrationFormByEfrem();
    }
}