import javax.swing.*;
import java.awt.*;
import java.io.BufferedReader;
import java.io.FileNotFoundException;
import java.util.Objects;

/*                 BULE HORA UNIVERSITY
                 COLLAGE OF INFORMATICS
             DEPARTMENT OF SOFTWARE ENGINEERING

           Course Title: mobile Application development
           Course Code: SWENG-3105

            Individual Assignment
          Name                    ID-No
          Ephrem Hirko (SWE)    Ru1360/12

                                    Submission
                                  To Instructor:  Dedefo B.
                                   Date:18/9/2014
                                  Bule Hora
                                   */
class File_reader extends Frame {
    private static JFrame frame;
    private static JTextField text;
    private String fname;
    private final JTextArea edit;
    private static java.io.FileReader reader;
    File_reader() {
        edit = new JTextArea(30, 60);
        edit.setLineWrap(true);
        edit.setEditable(false);
        JLabel LAB1 = new JLabel("Enter File Name in to this TextField");
        LAB1.setFont(new Font("Arial", Font.BOLD, 15));
        LAB1.setSize(100, 25);
        text = new JTextField(10);
        text.setSize(100, 25);

        JButton read = new JButton("Display File");
        read.setFont(new Font("Arial", Font.BOLD, 20));
        read.setBackground(Color.cyan);
        read.addActionListener(e -> {
            fname = text.getText();
            if (!fname.isEmpty() && (fname.equals("software.txt") || fname.equals("system.txt") || fname.equals("IT.txt") || fname.equals("science.txt"))) {
                try {
                    switch (fname) {
                        case "software.txt":
                        case "system.txt":
                            try {
                                reader = new java.io.FileReader(fname);
                                ReadData();
                            } catch (FileNotFoundException ex) {
                                throw new RuntimeException(ex);
                            }
                            break;
                        case "science.txt":
                        case "IT.txt":
                            try {
                                reader = new java.io.FileReader(fname);
                            } catch (FileNotFoundException ex) {
                                throw new RuntimeException(ex);
                            }
                            ReadData();
                            break;
                        default:
                            JOptionPane.showMessageDialog(null, "file doesn't exist");
                            break;
                    }
                } catch (Exception ex) {
                    throw new RuntimeException(ex);
                }
            } else if (fname.isEmpty()) {
                JOptionPane.showMessageDialog(null, "please enter file name\n" +
                        "for this assignment i use this bellow file name\n" +
                        "software.txt\n" +
                        " system.txt\n" +
                        " IT.txt\n" +
                        "science.txt");
                return;
            }
            if (!(Objects.equals(fname, "software.txt") || Objects.equals(fname, "system.txt") || Objects.equals(fname, "IT.txt") || Objects.equals(fname, "science.txt"))) {
                JOptionPane.showMessageDialog(null, "file mismatch");
            }
        });

        JButton write = new JButton("Back to Main Menu");
        write.setBackground(Color.magenta);
        write.setFont(new Font("Arial", Font.BOLD, 20));
        write.addActionListener(e -> {
            StudentRegistrationFormByEfrem t = new StudentRegistrationFormByEfrem();
            frame.setVisible(false);
        });
        frame = new JFrame("TextArea Load");
        frame.getContentPane().add(new JScrollPane(edit), BorderLayout.PAGE_END);
        frame.getContentPane().add(read, BorderLayout.EAST);
        frame.getContentPane().add(LAB1, BorderLayout.WEST);
        frame.getContentPane().add(text, BorderLayout.CENTER);
        frame.getContentPane().add(write, BorderLayout.NORTH);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setUndecorated(false);
        frame.getRootPane().setBorder(BorderFactory.createMatteBorder(4, 4, 4, 4, Color.green));
        frame.pack();
        frame.setLocationRelativeTo(null);
        frame.setVisible(true);
        frame.setResizable(false);
    }
    public void ReadData() {
        try {
            BufferedReader br = new BufferedReader(reader);
            edit.read(br, null);
            br.close();
            edit.requestFocus();
        } catch (Exception e2) {
            throw new RuntimeException(e2);
        }
    }
}