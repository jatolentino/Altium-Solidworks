# Altium-Solidworks Collaboration
### Vesions used: Solidworks 2021, Altium 21, Solidworks PCB 2021
## Why using Solidworks PCB as a middleman?
Because Solidworks PCB can collaboratio via the push-pull method with Solidworks, Altium (from its basic version: Designer) also has this option but it comes with the Enterprise version.

### From Altium PCB to Solidworks


1. Export the PCB file from Altium Designer to a CircuitMaker file
2. Import the latter CircuitMaker file into Solidworks PCB (option View > Solidworks PCB Connector)
3. A new file will be generated with extension *.SWPCBDoc
4. Add the SWPCBDoc file to a project and push it to Solidworks
5. In Solidworks, activate the Solidworks PCB Add-in and pull the latest file pushed from Solidworks PCB in step 4

### From Solidworks to Altium
If you have a fancy pcb 'board' design in Solidworks then you might want to push it to Altium, but how? Fortunately Altium can read SWPCBDoc files (pcb doc files from Solidworks PCB) but the opposite is not possible.
So the only thing to do is to push the board design from Solidworks to Solidworks PCB, then import the Solidworks PCB file using Altium, so that you can have your beautiful board design on Altium for whatever your use is.
