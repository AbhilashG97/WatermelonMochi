package displaydata;

import java.util.ArrayList;

import javax.swing.JFrame;
import javax.swing.JScrollPane;
import javax.swing.JTable;
import java.awt.*;

public class DisplayData {

	private ArrayList<Long> rowDataList;
	private JFrame jFrame;
	private JTable table;
	
	public DisplayData() {
		
	}
	
	public DisplayData(ArrayList<Long> rowDataList) {
		this.rowDataList = rowDataList;
		initializeTable();
	}
	
	/**
	 * @return the jFrame
	 */
	public JFrame getjFrame() {
		return jFrame;
	}

	/**
	 * @param jFrame the jFrame to set
	 */
	public void setjFrame(JFrame jFrame) {
		this.jFrame = jFrame;
	}

	private void initializeTable() {

		jFrame = new JFrame();
		jFrame.getContentPane().setFont(new Font("Tahoma", Font.PLAIN, 13));
		jFrame.setBounds(300, 100, 500, 300);
		jFrame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		jFrame.getContentPane().setLayout(new CardLayout(0, 0));
		jFrame.setTitle("Sorting Algorithm Running Time");
		{
			{	
				Object[][] rowData = {
						{"InsertionSort", rowDataList.get(0), rowDataList.get(1), rowDataList.get(2)},
						{"Heap Sort", rowDataList.get(3), rowDataList.get(4), rowDataList.get(5)},
						{"Merge Sort", rowDataList.get(6), rowDataList.get(7), rowDataList.get(8)},
						{"Quick Sort", rowDataList.get(9), rowDataList.get(10), rowDataList.get(11)}
				};
				String[] columnNames = {"Sorting Algorithm","10,000", "100,000", "1,000,000"};
				table = new JTable(rowData, columnNames);
				JScrollPane scrollPane = new JScrollPane(table);
				scrollPane.setBounds(50, 50, 100, 100);
				jFrame.add(scrollPane);
				table.setFillsViewportHeight(true);
				table.setShowGrid(true);

			}
		}
	}
}
